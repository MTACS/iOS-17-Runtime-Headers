
@interface _INPBShareETAIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBShareETAIntentResponse> {
    struct { }  _has;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _mediums;
    NSArray * _recipients;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int*mediums;
@property (nonatomic, readonly) unsigned long long mediumsCount;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, readonly) unsigned long long recipientsCount;
@property (readonly) Class superclass;

+ (Class)recipientType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsMediums:(id)arg1;
- (void)addMedium:(int)arg1;
- (void)addRecipient:(id)arg1;
- (void)clearMediums;
- (void)clearRecipients;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)mediumAtIndex:(unsigned long long)arg1;
- (int*)mediums;
- (id)mediumsAsString:(int)arg1;
- (unsigned long long)mediumsCount;
- (bool)readFrom:(id)arg1;
- (id)recipientAtIndex:(unsigned long long)arg1;
- (id)recipients;
- (unsigned long long)recipientsCount;
- (void)setMediums:(int*)arg1 count:(unsigned long long)arg2;
- (void)setRecipients:(id)arg1;
- (void)writeTo:(id)arg1;

@end
