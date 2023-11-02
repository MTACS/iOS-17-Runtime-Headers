
@interface _PSPeopleSuggestionsMetricsModelInternal : NSObject {
    void modelType;
    void otherModelTypeIdentifier;
    void trialIdentifier;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (id)description;
- (long long)hash;
- (id)init;
- (id)initWithModelIdentifier:(id)arg1 trialIdentifier:(id)arg2;
- (id)initWithModelType:(long long)arg1 trialIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
