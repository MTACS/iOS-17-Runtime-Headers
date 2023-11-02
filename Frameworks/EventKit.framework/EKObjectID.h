
@interface EKObjectID : NSObject <NSCopying, NSSecureCoding> {
    int  _databaseID;
    int  _entityType;
    int  _rowID;
    bool  _temporary;
}

@property (nonatomic, readonly) CADObjectID *CADObjectID;
@property (nonatomic, readonly) NSURL *URIRepresentation;
@property (nonatomic, readonly) int databaseID;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *entityName;
@property (nonatomic, readonly) long long entityType;
@property (nonatomic, readonly) bool isTemporary;
@property (nonatomic, readonly) bool isVirtual;
@property (nonatomic, readonly) int rowID;
@property (nonatomic, readonly) NSString *stringRepresentation;

+ (id)CADObjectIDsFromEKObjectIDs:(id)arg1 withGeneration:(int)arg2;
+ (id)EKObjectIDsFromCADObjectIDs:(id)arg1;
+ (id)EKObjectIDsFromData:(id)arg1;
+ (id)EKObjectIDsFromData:(id)arg1 databaseID:(int)arg2;
+ (id)EKObjectIDsFromData:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 databaseID:(int)arg3;
+ (id)objectIDWithCADObjectID:(id)arg1;
+ (id)objectIDWithEntityType:(int)arg1 rowID:(int)arg2;
+ (id)objectIDWithEntityType:(int)arg1 rowID:(int)arg2 databaseID:(int)arg3;
+ (id)objectIDWithURL:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)temporaryObjectIDWithEntityType:(int)arg1;
+ (id)virtualObjectIDWithEntityType:(int)arg1;

- (id)CADObjectID;
- (id)CADObjectIDWithGeneration:(int)arg1;
- (id)URIRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)databaseID;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entityName;
- (long long)entityType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithEntityType:(int)arg1 rowID:(int)arg2 databaseID:(int)arg3 temporary:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isTemporary;
- (bool)isVirtual;
- (int)rowID;
- (id)stringRepresentation;

@end
