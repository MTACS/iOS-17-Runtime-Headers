
@interface IDSCKRecordZoneID : NSObject <NSCopying, NSSecureCoding> {
    NSString * _ownerName;
    NSString * _zoneName;
}

@property (nonatomic, readonly) NSString *ownerName;
@property (nonatomic, readonly) NSString *zoneName;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;
- (id)ownerName;
- (id)zoneName;

@end
