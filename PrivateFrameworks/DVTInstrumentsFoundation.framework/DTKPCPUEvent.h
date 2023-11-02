
@interface DTKPCPUEvent : NSObject {
    NSString * _alias;
    NSString * _definition;
    NSString * _displayName;
    struct kpep_event { } * _kpepEvent;
    NSString * _name;
}

@property (nonatomic, retain) NSString *alias;
@property (nonatomic, readonly, retain) NSString *aliasOrName;
@property (nonatomic, readonly, retain) NSString *definition;
@property (nonatomic, readonly, retain) NSString *displayName;
@property (nonatomic, readonly) struct kpep_event { }*kpepEvent;
@property (nonatomic, readonly, retain) NSString *name;

- (void).cxx_destruct;
- (id)alias;
- (id)aliasOrName;
- (id)definition;
- (id)description;
- (id)displayName;
- (id)initWithName:(id)arg1 alias:(id)arg2 definition:(id)arg3 kpepEvent:(struct kpep_event { }*)arg4;
- (struct kpep_event { }*)kpepEvent;
- (id)name;
- (void)setAlias:(id)arg1;

@end
