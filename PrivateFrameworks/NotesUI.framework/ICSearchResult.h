
@interface ICSearchResult : NSObject <ICItemIdentifier> {
    unsigned long long  _cachedHash;
    ICSearchResultConfiguration * _configuration;
    <ICSearchIndexable> * _currentContextObject;
    NSDictionary * _decomposedHighlightInfo;
    NSString * _displayingSnippet;
    NSTextCheckingResult * _displayingSnippetCheckingResult;
    NSString * _displayingTitle;
    NSTextCheckingResult * _displayingTitleCheckingResult;
    NSValue * _firstMatchingRangeInNote;
    ICSearchResultRegexMatchFinder * _highlightPatternRegexFinder;
    bool  _isDisplayingParticipantMatch;
    <ICSearchIndexable> * _object;
    ICSearchResultRegexMatchFinder * _participantHighlightRegexMatchFinder;
    NSAttributedString * _snippetAttributedString;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _snippetAttributedStringInsideFrame;
    ICSearchResultRegexMatchFinder * _snippetHighlightRegexMatchFinder;
    NSRegularExpression * _tipKitCheckRegex;
    NSAttributedString * _titleAttributedString;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _titleAttributedStringInsideFrame;
    ICSearchResultRegexMatchFinder * _titleHighlightRegexMatchFinder;
}

@property (nonatomic, readonly) ICSearchResultConfiguration *configuration;
@property (nonatomic, retain) <ICSearchIndexable> *currentContextObject;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *decomposedHighlightInfo;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *displayingSnippet;
@property (nonatomic, retain) NSTextCheckingResult *displayingSnippetCheckingResult;
@property (nonatomic, retain) NSString *displayingTitle;
@property (nonatomic, retain) NSTextCheckingResult *displayingTitleCheckingResult;
@property (nonatomic, retain) NSValue *firstMatchingRangeInNote;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ICSearchResultRegexMatchFinder *highlightPatternRegexFinder;
@property (nonatomic) bool isDisplayingParticipantMatch;
@property (nonatomic, readonly) <ICSearchIndexable> *object;
@property (nonatomic, readonly) <ICItemIdentifier> *parentIdentifier;
@property (nonatomic, retain) ICSearchResultRegexMatchFinder *participantHighlightRegexMatchFinder;
@property (nonatomic, retain) NSAttributedString *snippetAttributedString;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } snippetAttributedStringInsideFrame;
@property (nonatomic, retain) ICSearchResultRegexMatchFinder *snippetHighlightRegexMatchFinder;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSRegularExpression *tipKitCheckRegex;
@property (nonatomic, retain) NSAttributedString *titleAttributedString;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } titleAttributedStringInsideFrame;
@property (nonatomic, retain) ICSearchResultRegexMatchFinder *titleHighlightRegexMatchFinder;

+ (id)attributedStringWithMatchHighlighted:(id)arg1 textCheckingResult:(id)arg2 usingAttributes:(id)arg3 highlightColor:(id)arg4 insideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 isSnippetForParticipantMatch:(bool)arg6 finishingUpRegexMatchFinder:(id)arg7;
+ (id)attributesByHighlightingAttributes:(id)arg1 withHighlightColor:(id)arg2;
+ (id)authorNameToHighlightForNote:(id)arg1 fromSearchResult:(id)arg2 textCheckingResult:(id*)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForAttributedString:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)canFitAttributedString:(id)arg1 ellipses:(id)arg2 shouldPrefixWithEllipses:(bool)arg3 insideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 centered:(bool)arg5;
+ (id)finishUpHighlightingWithMatchFinder:(id)arg1 forAttributedString:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 highlightedAttributes:(id)arg4;
+ (id)firstTextCheckingResultOfRegex:(id)arg1 inDocumentText:(id)arg2;

- (void).cxx_destruct;
- (id)attributedSummaryWithBaseAttributes:(id)arg1 highlightColor:(id)arg2 insideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)attributedTitleWithBaseAttributes:(id)arg1 highlightColor:(id)arg2 insideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (long long)compareByModificationDate:(id)arg1;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentContextObject;
- (id)decomposedHighlightInfo;
- (id)description;
- (id)displayingSnippet;
- (id)displayingSnippetCheckingResult;
- (id)displayingTitle;
- (id)displayingTitleCheckingResult;
- (id)firstMatchingRangeInNote;
- (unsigned long long)hash;
- (id)highlightPatternRegexFinder;
- (id)initWithMainContextObject:(id)arg1 currentContextObject:(id)arg2 configuration:(id)arg3;
- (id)initWithObject:(id)arg1 configuration:(id)arg2;
- (void)initializeRegexes;
- (bool)isDisplayingParticipantMatch;
- (bool)isEqual:(id)arg1;
- (id)object;
- (id)participantHighlightRegexMatchFinder;
- (void)prepareDisplayingSnippetWithAccessingObject:(id)arg1;
- (void)prepareDisplayingTitleWithAccessingObject:(id)arg1;
- (void)prepareFirstMatchingRangeWithAccessingObject:(id)arg1;
- (void)refetchObjectFromContext:(id)arg1;
- (void)refreshDisplaySnippet;
- (void)refreshDisplayTitle;
- (void)refreshFirstMatchingRange;
- (void)setCurrentContextObject:(id)arg1;
- (void)setDisplayingSnippet:(id)arg1;
- (void)setDisplayingSnippetCheckingResult:(id)arg1;
- (void)setDisplayingTitle:(id)arg1;
- (void)setDisplayingTitleCheckingResult:(id)arg1;
- (void)setFirstMatchingRangeInNote:(id)arg1;
- (void)setHighlightPatternRegexFinder:(id)arg1;
- (void)setIsDisplayingParticipantMatch:(bool)arg1;
- (void)setParticipantHighlightRegexMatchFinder:(id)arg1;
- (void)setSnippetAttributedString:(id)arg1;
- (void)setSnippetAttributedStringInsideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSnippetHighlightRegexMatchFinder:(id)arg1;
- (void)setTipKitCheckRegex:(id)arg1;
- (void)setTitleAttributedString:(id)arg1;
- (void)setTitleAttributedStringInsideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTitleHighlightRegexMatchFinder:(id)arg1;
- (id)snippetAttributedString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })snippetAttributedStringInsideFrame;
- (id)snippetHighlightRegexMatchFinder;
- (id)snippetWithBaseAttributes:(id)arg1 highlightColor:(id)arg2 insideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)tipKitCheckRegex;
- (id)titleAttributedString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleAttributedStringInsideFrame;
- (id)titleHighlightRegexMatchFinder;

@end
