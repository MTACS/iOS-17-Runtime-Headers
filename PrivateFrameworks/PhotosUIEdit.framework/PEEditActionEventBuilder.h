
@interface PEEditActionEventBuilder : NSObject {
    NSString * _actionDescription;
    NSDictionary * _assetsMap;
    PEEditAction * _baseAction;
    bool  _hasError;
}

@property (nonatomic) bool hasError;

- (void).cxx_destruct;
- (id)buildEvents;
- (bool)hasError;
- (id)initWithActionDescription:(id)arg1 assets:(id)arg2;
- (id)initWithBaseAction:(id)arg1 assets:(id)arg2;
- (void)registerAction:(id)arg1 forAssets:(id)arg2;
- (void)registerActionType:(id)arg1 forAssets:(id)arg2;
- (void)setHasError:(bool)arg1;

@end
