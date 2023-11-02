
@interface TPSAnalyticsEventContentViewed : TPSAnalyticsEvent {
    NSString * _clientConditionID;
    NSString * _collectionID;
    NSString * _contentID;
    NSString * _correlationID;
    NSString * _viewMethod;
    NSString * _viewMode;
    NSString * _widgetType;
}

@property (nonatomic, retain) NSString *clientConditionID;
@property (nonatomic, retain) NSString *collectionID;
@property (nonatomic, retain) NSString *contentID;
@property (nonatomic, retain) NSString *correlationID;
@property (nonatomic, readonly) NSNumber *sessionViewNumber;
@property (nonatomic, retain) NSString *viewMethod;
@property (nonatomic, retain) NSString *viewMode;
@property (nonatomic, retain) NSString *widgetType;

// Image: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore

+ (id)eventWithContentID:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3 clientConditionID:(id)arg4 viewMethod:(id)arg5 viewMode:(id)arg6;
+ (id)eventWithContentID:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3 clientConditionID:(id)arg4 widgetType:(id)arg5;
+ (void)incrementSessionViewNumberForKey:(id)arg1;
+ (void)resetSessionViewNumber;
+ (void)setAppReferrer:(id)arg1;
+ (bool)supportsSecureCoding;
+ (bool)updateSessionViewNumber;

- (void).cxx_destruct;
- (id)_initWithContentID:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3 clientConditionID:(id)arg4 viewMethod:(id)arg5 viewMode:(id)arg6;
- (id)_initWithContentID:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3 clientConditionID:(id)arg4 widgetType:(id)arg5;
- (id)clientConditionID;
- (id)collectionID;
- (id)contentID;
- (id)correlationID;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (bool)isWidget;
- (void)log;
- (id)mutableAnalyticsEventRepresentation;
- (id)sessionViewNumber;
- (void)setClientConditionID:(id)arg1;
- (void)setCollectionID:(id)arg1;
- (void)setContentID:(id)arg1;
- (void)setCorrelationID:(id)arg1;
- (void)setViewMethod:(id)arg1;
- (void)setViewMode:(id)arg1;
- (void)setWidgetType:(id)arg1;
- (id)viewMethod;
- (id)viewMode;
- (id)widgetType;

// Image: /System/Library/PrivateFrameworks/TipsUI.framework/TipsUI

+ (id)analyticsViewModeForInterfaceStyle:(long long)arg1;
+ (id)analyticsViewModeForTraitCollection:(id)arg1;

@end
