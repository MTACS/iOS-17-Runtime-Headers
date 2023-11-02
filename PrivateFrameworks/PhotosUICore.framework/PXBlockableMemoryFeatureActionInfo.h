
@interface PXBlockableMemoryFeatureActionInfo : NSObject {
    NSString * _actionType;
    NSString * _localizedTitle;
}

@property (nonatomic, readonly) NSString *actionType;
@property (nonatomic, readonly) NSString *localizedTitle;

- (void).cxx_destruct;
- (id)actionType;
- (id)init;
- (id)initWithActionType:(id)arg1 localizedTitle:(id)arg2;
- (id)localizedTitle;

@end
