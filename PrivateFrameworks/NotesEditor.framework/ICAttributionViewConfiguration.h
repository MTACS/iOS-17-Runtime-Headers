
@interface ICAttributionViewConfiguration : NSObject <NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _adjustedFormattedTimestampFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _adjustedFrame;
    double  _appliedHorizontalAdjustmentRatio;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _associatedTextFrame;
    NSAttributedString * _attribution;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _attributionFrame;
    id  _attributionTextStorage;
    bool  _blurred;
    NSArray * _childConfigurations;
    bool  _dataLoaded;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _disclosureImageFrame;
    NSArray * _editGroups;
    NSDate * _explicitTimestamp;
    bool  _focused;
    bool  _forceVisible;
    bool  _forcesAttributionHidden;
    bool  _forcesTimestampHidden;
    NSAttributedString * _formattedTimestamp;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _formattedTimestampFrame;
    id  _formattedTimestampTextStorage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    NSMutableArray * _highlightConfigurations;
    ICAttributionViewConfiguration * _parentConfiguration;
    double  _preferredHighlightValue;
    bool  _preview;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    ICAttributionViewConfigurationSharedState * _sharedState;
    UIImage * _statusImage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _statusImageFrame;
    ICTTTextEdit * _textEdit;
    NSDate * _timestamp;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _trimmedRange;
    NSArray * _unreadUserIDs;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } adjustedFormattedTimestampFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } adjustedFrame;
@property (nonatomic) double appliedHorizontalAdjustmentRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } associatedTextFrame;
@property (nonatomic, copy) NSAttributedString *attribution;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } attributionFrame;
@property (nonatomic, retain) id attributionTextStorage;
@property (nonatomic, readonly) NSString *attributionUserID;
@property (getter=isBlurred, nonatomic) bool blurred;
@property (nonatomic, readonly) NSArray *childConfigurations;
@property (getter=isDataLoaded, nonatomic) bool dataLoaded;
@property (nonatomic, readonly, copy) UIImage *disclosureImage;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } disclosureImageFrame;
@property (nonatomic, readonly) NSArray *editGroups;
@property (nonatomic, copy) NSDate *explicitTimestamp;
@property (getter=isFocused, nonatomic) bool focused;
@property (nonatomic) bool forceVisible;
@property (nonatomic) bool forcesAttributionHidden;
@property (nonatomic) bool forcesTimestampHidden;
@property (nonatomic, copy) NSAttributedString *formattedTimestamp;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } formattedTimestampFrame;
@property (nonatomic, retain) id formattedTimestampTextStorage;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, retain) NSMutableArray *highlightConfigurations;
@property (nonatomic, readonly) bool isAttributionHidden;
@property (nonatomic, readonly) bool isDisclosureImageHidden;
@property (nonatomic, readonly) bool isStatusImageHidden;
@property (nonatomic, readonly) bool isTimestampHidden;
@property (nonatomic) ICAttributionViewConfiguration *parentConfiguration;
@property (nonatomic) double preferredHighlightValue;
@property (getter=isPreview, nonatomic) bool preview;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) ICAttributionViewConfigurationSharedState *sharedState;
@property (nonatomic, copy) UIImage *statusImage;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } statusImageFrame;
@property (nonatomic, readonly) ICTTTextEdit *textEdit;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } trimmedRange;
@property (nonatomic, readonly) NSArray *unreadUserIDs;
@property (nonatomic, readonly) NSOrderedSet *userIDs;

+ (id)loadDataQueue;

- (void).cxx_destruct;
- (void)addEditGroup:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedFormattedTimestampFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedFrame;
- (double)appliedHorizontalAdjustmentRatio;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })associatedTextFrame;
- (id)attribution;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attributionFrame;
- (id)attributionTextStorage;
- (id)attributionUserID;
- (id)childConfigurations;
- (void)commonInitWithSharedState:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)disclosureImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })disclosureImageFrame;
- (void)drawStatusImageInContext:(struct CGContext { }*)arg1 canvasSize:(struct CGSize { double x1; double x2; })arg2;
- (id)editGroupForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)editGroups;
- (id)explicitTimestamp;
- (bool)forceVisible;
- (bool)forcesAttributionHidden;
- (bool)forcesTimestampHidden;
- (id)formattedTimestamp;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })formattedTimestampFrame;
- (id)formattedTimestampTextStorage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (bool)hasValidRange;
- (unsigned long long)hash;
- (id)highlightConfigurations;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithSharedState:(id)arg1 editGroups:(id)arg2 parentConfiguration:(id)arg3;
- (id)initWithSharedState:(id)arg1 textEdit:(id)arg2 parentConfiguration:(id)arg3;
- (bool)isAttributionHidden;
- (bool)isBlurred;
- (bool)isDataLoaded;
- (bool)isDisclosureImageHidden;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAttributionViewConfiguration:(id)arg1;
- (bool)isFocused;
- (bool)isPreview;
- (bool)isStatusImageHidden;
- (bool)isTimestampHidden;
- (void)loadDataWithCompletion:(id /* block */)arg1;
- (id)parentConfiguration;
- (double)preferredHighlightValue;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAdjustedFormattedTimestampFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAdjustedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAppliedHorizontalAdjustmentRatio:(double)arg1;
- (void)setAssociatedTextFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAttribution:(id)arg1;
- (void)setAttributionTextStorage:(id)arg1;
- (void)setBlurred:(bool)arg1;
- (void)setDataLoaded:(bool)arg1;
- (void)setExplicitTimestamp:(id)arg1;
- (void)setFocused:(bool)arg1;
- (void)setForceVisible:(bool)arg1;
- (void)setForcesAttributionHidden:(bool)arg1;
- (void)setForcesTimestampHidden:(bool)arg1;
- (void)setFormattedTimestamp:(id)arg1;
- (void)setFormattedTimestampTextStorage:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlightConfigurations:(id)arg1;
- (void)setParentConfiguration:(id)arg1;
- (void)setPreferredHighlightValue:(double)arg1;
- (void)setPreview:(bool)arg1;
- (void)setStatusImage:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setTrimmedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)sharedState;
- (id)statusImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusImageFrame;
- (void)synchronouslyLoadData;
- (id)textEdit;
- (id)timestamp;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })trimmedRange;
- (id)unreadUserIDs;
- (void)updateAttribution;
- (void)updateAttributionTextStorage;
- (void)updateChildConfigurations;
- (void)updateFormattedTimestampTextStorage;
- (void)updateFrames;
- (void)updateHighlightAlpha;
- (void)updateHighlightFrames;
- (void)updateStatusImage;
- (void)updateTimestamp;
- (void)updateUnreadUserIDs;
- (id)userIDs;

@end
