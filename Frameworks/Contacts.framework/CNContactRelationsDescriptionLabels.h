
@interface CNContactRelationsDescriptionLabels : NSObject {
    NSArray * _extendedLabels;
    NSArray * _extendedLocaleSpecificLabels;
    NSDictionary * _localizedStringsByLabelKey;
    NSArray * _preferredLanguages;
    NSArray * _standardLabels;
    NSArray * _standardLocaleSpecificLabels;
}

@property (nonatomic, readonly) NSArray *extendedLabels;
@property (nonatomic, readonly) NSArray *extendedLocaleSpecificLabels;
@property (nonatomic, readonly) NSDictionary *localizedStringsByLabelKey;
@property (nonatomic, readonly) NSArray *preferredLanguages;
@property (nonatomic, readonly) NSArray *standardLabels;
@property (nonatomic, readonly) NSArray *standardLocaleSpecificLabels;

- (void).cxx_destruct;
- (id)extendedLabels;
- (id)extendedLocaleSpecificLabels;
- (id)initWithPreferredLanguages:(id)arg1 standardLabels:(id)arg2 standardLocaleSpecificLabels:(id)arg3 extendedLabels:(id)arg4 extendedLocaleSpecificLabels:(id)arg5 localizedStringsByLabelKey:(id)arg6;
- (id)localizedStringsByLabelKey;
- (id)preferredLanguages;
- (id)standardLabels;
- (id)standardLocaleSpecificLabels;

@end
