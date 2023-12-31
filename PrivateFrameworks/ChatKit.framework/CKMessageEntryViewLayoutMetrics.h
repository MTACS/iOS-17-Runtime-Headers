
@interface CKMessageEntryViewLayoutMetrics : NSObject <NSSecureCoding> {
    double  _defaultEntryContentViewHeight;
    double  _defaultEntryViewHeight;
    double  _defaultSubjectEntryContentViewHeight;
    double  _defaultSubjectEntryViewHeight;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _entryViewContentInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _entryViewTextAlignmentInsets;
}

@property (nonatomic, readonly) double defaultEntryContentViewHeight;
@property (nonatomic, readonly) double defaultEntryViewHeight;
@property (nonatomic, readonly) double defaultSubjectEntryContentViewHeight;
@property (nonatomic, readonly) double defaultSubjectEntryViewHeight;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } entryViewContentInsets;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } entryViewTextAlignmentInsets;

+ (id)cachedMetricsRecalculatingIfNecessary;
+ (bool)supportsSecureCoding;

- (void)calculateTextMetrics;
- (double)defaultEntryContentViewHeight;
- (double)defaultEntryViewHeight;
- (double)defaultSubjectEntryContentViewHeight;
- (double)defaultSubjectEntryViewHeight;
- (void)encodeWithCoder:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })entryViewContentInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })entryViewTextAlignmentInsets;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
