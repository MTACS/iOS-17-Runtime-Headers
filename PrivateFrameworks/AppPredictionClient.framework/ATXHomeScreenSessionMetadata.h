
@interface ATXHomeScreenSessionMetadata : NSObject <ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol> {
    bool  _isWidgetInTodayView;
    NSString * _widgetBundleId;
    NSString * _widgetUniqueId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isWidgetInTodayView;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *widgetBundleId;
@property (nonatomic, retain) NSString *widgetUniqueId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithWidgetUniqueId:(id)arg1 widgetBundleId:(id)arg2 isWidgetInTodayView:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXHomeScreenSessionMetadata:(id)arg1;
- (bool)isWidgetInTodayView;
- (void)setIsWidgetInTodayView:(bool)arg1;
- (void)setWidgetBundleId:(id)arg1;
- (void)setWidgetUniqueId:(id)arg1;
- (id)widgetBundleId;
- (id)widgetUniqueId;

@end
