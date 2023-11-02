
@interface _PSFeedbackAction : NSObject {
    _PSSuggestion * _suggestion;
    NSString * _transportBundleID;
    long long  _type;
}

@property (nonatomic, readonly) _PSSuggestion *suggestion;
@property (nonatomic, readonly, copy) NSString *transportBundleID;
@property (nonatomic, readonly) long long type;

+ (id)abandonment;
+ (id)engagementWithAppSuggestion:(id)arg1 transportBundleID:(id)arg2;
+ (id)engagementWithNonSuggestionWithEngagementIdentifier:(id)arg1;
+ (id)engagementWithSharingSuggestion:(id)arg1 transportBundleID:(id)arg2;
+ (id)engagementWithSuggestion:(id)arg1 transportBundleID:(id)arg2;

- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 suggestion:(id)arg2 transportBundleID:(id)arg3;
- (id)suggestion;
- (id)transportBundleID;
- (long long)type;

@end
