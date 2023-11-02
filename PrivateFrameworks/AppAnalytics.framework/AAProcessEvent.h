
@interface AAProcessEvent : NSObject {
    void groupName;
    void json;
    void name;
    void version;
}

@property (nonatomic, readonly) NSString *groupName;
@property (nonatomic, readonly) AAJSON *json;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *version;

- (void).cxx_destruct;
- (id)groupName;
- (id)init;
- (id)json;
- (id)name;
- (id)version;

@end
