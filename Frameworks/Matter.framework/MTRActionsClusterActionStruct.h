
@interface MTRActionsClusterActionStruct : NSObject <NSCopying> {
    NSNumber * _actionID;
    NSNumber * _endpointListID;
    NSString * _name;
    NSNumber * _state;
    NSNumber * _supportedCommands;
    NSNumber * _type;
}

@property (nonatomic, copy) NSNumber *actionID;
@property (nonatomic, copy) NSNumber *endpointListID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *state;
@property (nonatomic, copy) NSNumber *supportedCommands;
@property (nonatomic, copy) NSNumber *type;

- (void).cxx_destruct;
- (id)actionID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endpointListID;
- (id)init;
- (id)name;
- (void)setActionID:(id)arg1;
- (void)setEndpointListID:(id)arg1;
- (void)setName:(id)arg1;
- (void)setState:(id)arg1;
- (void)setSupportedCommands:(id)arg1;
- (void)setType:(id)arg1;
- (id)state;
- (id)supportedCommands;
- (id)type;

@end
