
@interface TUBusinessCallerItem : NSObject <TUBusinessCallerItem> {
    NSString * _department;
    NSURL * _logoURL;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *department;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURL *logoURL;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)department;
- (id)description;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 department:(id)arg2 logoURL:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCallerItem:(id)arg1;
- (id)logoURL;
- (id)name;

@end
