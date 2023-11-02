
@interface SCUIInterventionViewController : UINavigationController <SCUIInterventionContainer> {
    NSDictionary * _contextDictionary;
    <SCUIInterventionViewControllerDelegate> * _interventionDelegate;
    long long  _options;
    long long  _type;
    long long  _workflow;
}

@property (nonatomic, readonly, copy) NSDictionary *contextDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SCUIInterventionViewControllerDelegate> *interventionDelegate;
@property (nonatomic, readonly) long long options;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long workflow;

// Image: /System/Library/PrivateFrameworks/SensitiveContentAnalysisUI.framework/SensitiveContentAnalysisUI

+ (id)viewControllerWithWorkflow:(long long)arg1 contextDictionary:(id)arg2;
+ (id)viewControllerWithWorkflow:(long long)arg1 contextDictionary:(id)arg2 options:(long long)arg3;

- (void).cxx_destruct;
- (id)contextDictionary;
- (id)initWithWorkflow:(long long)arg1 contextDictionary:(id)arg2 options:(long long)arg3;
- (id)initWithWorkflow:(long long)arg1 contextDictionary:(id)arg2 options:(long long)arg3 type:(long long)arg4;
- (id)interventionDelegate;
- (long long)options;
- (id)rootScreenWithContainer:(id)arg1;
- (void)setInterventionDelegate:(id)arg1;
- (long long)type;
- (long long)workflow;

// Image: /System/Library/PrivateFrameworks/UserSafetyUI.framework/UserSafetyUI

+ (id)viewControllerWithWorkflow:(long long)arg1 assetType:(long long)arg2 contextDictionary:(id)arg3;

@end
