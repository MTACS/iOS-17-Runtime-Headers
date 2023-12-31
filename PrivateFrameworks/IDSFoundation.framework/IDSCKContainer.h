
@interface IDSCKContainer : NSObject {
    NSString * _containerIdentifier;
    IDSCKDatabase * _privateCloudDatabase;
    IDSCKDatabase * _publicCloudDatabase;
}

@property (readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) IDSCKDatabase *privateCloudDatabase;
@property (nonatomic, readonly) IDSCKDatabase *publicCloudDatabase;

+ (Class)__class;
+ (id)containerWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)containerIdentifier;
- (id)privateCloudDatabase;
- (id)publicCloudDatabase;

@end
