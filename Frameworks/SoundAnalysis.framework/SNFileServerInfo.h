
@interface SNFileServerInfo : NSObject {
    void identifier;
    void idsDeviceID;
    void model;
    void name;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *idsDeviceID;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)identifier;
- (id)idsDeviceID;
- (id)init;
- (id)initWithIdentifier:(id)arg1 idsDeviceID:(id)arg2 model:(id)arg3 name:(id)arg4;
- (id)model;
- (id)name;

@end
