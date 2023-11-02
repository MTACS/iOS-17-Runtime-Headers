
@interface _ATXChronoServicesProviderRecord : NSObject {
    unsigned long long  _state;
    NSString * _suggestedStackId;
    CHSWidget * _widget;
    <BSInvalidatable> * _widgetHandle;
}

@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) NSString *suggestedStackId;
@property (nonatomic, retain) CHSWidget *widget;
@property (nonatomic, retain) <BSInvalidatable> *widgetHandle;

- (void).cxx_destruct;
- (void)setState:(unsigned long long)arg1;
- (void)setSuggestedStackId:(id)arg1;
- (void)setWidget:(id)arg1;
- (void)setWidgetHandle:(id)arg1;
- (unsigned long long)state;
- (id)suggestedStackId;
- (id)widget;
- (id)widgetHandle;

@end
