
@interface EMObjectID : NSObject <EFCacheable, EFLoggable, NSCopying, NSSecureCoding> {
    bool  _ephemeral;
    unsigned long long  _hash;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <NSObject><NSSecureCoding><NSCopying> * _representedObjectID;
    EFStringHash * _stringHash;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEphemeral, readonly) bool ephemeral;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) <NSObject><NSSecureCoding><NSCopying> *representedObjectID;
@property (nonatomic, readonly, copy) NSData *serializedRepresentation;
@property (readonly) EFStringHash *stringHash;
@property (readonly) Class superclass;

+ (id)_decodableClasses;
+ (void)addDecodableClass:(Class)arg1;
+ (id)log;
+ (id)objectIDFromSerializedRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInitAsEphemeralID:(bool)arg1 representedObjectID:(id)arg2;
- (id)cachedSelf;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initAsEphemeralID:(bool)arg1;
- (id)initAsEphemeralID:(bool)arg1 representedObjectID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithRepresentedObjectID:(id)arg1;
- (bool)isEphemeral;
- (bool)isEqual:(id)arg1;
- (id)representedObjectID;
- (id)serializedRepresentation;
- (id)stringHash;

@end
