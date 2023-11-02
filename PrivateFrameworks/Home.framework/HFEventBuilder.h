
@interface HFEventBuilder : NSObject <HFComparable, NAHashable> {
    NSString * _eventType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *eventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)eventBuilderForEvent:(id)arg1;

- (void).cxx_destruct;
- (id)buildNewEventsFromCurrentState;
- (id)compareToObject:(id)arg1;
- (id)comparisonKey;
- (id)eventType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithEvent:(id)arg1;
- (id)naturalLanguageNameWithOptions:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine

- (id)recommendableObjectsInvolved;

@end
