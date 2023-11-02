
@interface WFContextualActionEvent : NSObject {
    WFContextualAction * _action;
    NSString * _containerName;
    NSArray * _contentTypes;
    unsigned long long  _surface;
}

@property (nonatomic, readonly) WFContextualAction *action;
@property (nonatomic, readonly, copy) NSString *containerName;
@property (nonatomic, readonly) NSArray *contentTypes;
@property (nonatomic, readonly) unsigned long long surface;

- (void).cxx_destruct;
- (id)action;
- (id)containerName;
- (id)contentTypes;
- (id)initWithAction:(id)arg1 contentTypes:(id)arg2 containerName:(id)arg3 surface:(unsigned long long)arg4;
- (unsigned long long)surface;

@end
