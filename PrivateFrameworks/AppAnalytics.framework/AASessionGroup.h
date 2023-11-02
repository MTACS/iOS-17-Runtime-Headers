
@interface AASessionGroup : NSObject {
    void groupName;
}

@property (nonatomic, copy) NSString *groupName;

+ (id)default;

- (void).cxx_destruct;
- (id)groupName;
- (id)init;
- (id)initWithGroupName:(id)arg1;
- (void)setGroupName:(id)arg1;

@end
