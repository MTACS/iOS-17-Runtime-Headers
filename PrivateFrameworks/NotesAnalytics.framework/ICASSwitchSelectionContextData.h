
@interface ICASSwitchSelectionContextData : NSObject <AADataEventType> {
    ICASSwitchSelectionContext * _switchSelectionContext;
}

@property (nonatomic, readonly) ICASSwitchSelectionContext *switchSelectionContext;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithSwitchSelectionContext:(id)arg1;
- (id)switchSelectionContext;
- (id)toDict;

@end
