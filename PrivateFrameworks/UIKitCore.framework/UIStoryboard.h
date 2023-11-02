
@interface UIStoryboard : NSObject {
    id  ___currentSender;
    id /* block */  ___currentStoryboardSegueCreator;
    UIStoryboardSegueTemplate * ___currentStoryboardSegueTemplate;
    NSBundle * bundle;
    NSString * designatedEntryPointIdentifier;
    NSString * designatedMenuIdentifier;
    NSDictionary * identifierToExternalStoryboardReferenceMap;
    NSDictionary * identifierToNibNameMap;
    NSMutableDictionary * identifierToUINibMap;
    NSString * storyboardFileName;
}

@property (nonatomic) id __currentSender;
@property (nonatomic) id /* block */ __currentStoryboardSegueCreator;
@property (nonatomic) UIStoryboardSegueTemplate *__currentStoryboardSegueTemplate;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSString *designatedEntryPointIdentifier;
@property (nonatomic, readonly) NSString *designatedMenuIdentifier;
@property (nonatomic, readonly) NSDictionary *identifierToExternalStoryboardReferenceMap;
@property (nonatomic, readonly) NSDictionary *identifierToNibNameMap;
@property (nonatomic, readonly) NSMutableDictionary *identifierToUINibMap;
@property (readonly) NSString *name;
@property (nonatomic, readonly) NSString *storyboardFileName;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)storyboardWithName:(id)arg1 bundle:(id)arg2;

- (id)__currentSender;
- (id /* block */)__currentStoryboardSegueCreator;
- (id)__currentStoryboardSegueTemplate;
- (id)__reallyInstantiateViewControllerWithIdentifier:(id)arg1 creator:(id /* block */)arg2 storyboardSegueTemplate:(id)arg3 sender:(id)arg4;
- (id)_instantiateInitialMenu;
- (id)_instantiateInitialViewControllerWithCreator:(id /* block */)arg1 storyboardSegueTemplate:(id)arg2 sender:(id)arg3;
- (id)_instantiateViewControllerReferencedByPlaceholderWithIdentifier:(id)arg1 storyboardSegueTemplate:(id)arg2 sender:(id)arg3;
- (id)_instantiateViewControllerWithIdentifier:(id)arg1 creator:(id /* block */)arg2 storyboardSegueTemplate:(id)arg3 sender:(id)arg4;
- (id)bundle;
- (bool)containsNibNamed:(id)arg1;
- (void)dealloc;
- (id)designatedEntryPointIdentifier;
- (id)designatedMenuIdentifier;
- (id)identifierForStringsFile;
- (id)identifierToExternalStoryboardReferenceMap;
- (id)identifierToNibNameMap;
- (id)identifierToUINibMap;
- (id)initWithBundle:(id)arg1 storyboardFileName:(id)arg2 identifierToNibNameMap:(id)arg3 identifierToExternalStoryboardReferenceMap:(id)arg4 designatedEntryPointIdentifier:(id)arg5 designatedMenuIdentifier:(id)arg6;
- (id)instantiateInitialViewController;
- (id)instantiateInitialViewControllerWithCreator:(id /* block */)arg1;
- (id)instantiateViewControllerWithIdentifier:(id)arg1;
- (id)instantiateViewControllerWithIdentifier:(id)arg1 creator:(id /* block */)arg2;
- (id)name;
- (id)nibForStoryboardNibNamed:(id)arg1;
- (id)nibForViewControllerWithIdentifier:(id)arg1;
- (id)referencedStoryboardForExternalReferenceInfo:(id)arg1;
- (void)set__currentSender:(id)arg1;
- (void)set__currentStoryboardSegueCreator:(id /* block */)arg1;
- (void)set__currentStoryboardSegueTemplate:(id)arg1;
- (id)storyboardFileName;

// Image: /System/Library/PrivateFrameworks/FeedbackCore.framework/FeedbackCore

+ (id)feedbackDraftViewController;
+ (id)mainStoryboard;
+ (id)teamPickerViewController;
+ (id)teamsStoryboard;

// Image: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI

- (id)tryToInstantiateViewControllerWithIdentifier:(id)arg1;

@end
