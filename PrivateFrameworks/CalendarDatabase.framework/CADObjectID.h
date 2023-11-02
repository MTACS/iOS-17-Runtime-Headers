
@interface CADObjectID : NSObject <NSCopying, NSSecureCoding> {
    int  _databaseID;
    int  _entityID;
    int  _entityType;
    bool  _temporary;
}

@property (nonatomic, readonly) int databaseID;
@property (nonatomic, readonly) int entityID;
@property (nonatomic, readonly) int entityType;
@property (nonatomic, readonly) bool isVirtual;
@property (getter=isTemporary, nonatomic, readonly) bool temporary;

// Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase

+ (bool)supportsSecureCoding;

- (id)URIRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)databaseID;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (int)entityID;
- (id)entityName;
- (int)entityType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithEntityType:(int)arg1 entityID:(int)arg2;
- (id)initWithEntityType:(int)arg1 entityID:(int)arg2 databaseID:(int)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isTemporary;
- (bool)isVirtual;
- (id)stringRepresentation;

// Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon

- (id)stampedCopyWithGeneration:(int)arg1;

@end
