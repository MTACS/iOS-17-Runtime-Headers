
@interface AXAuditIssue : NSObject <NSCopying> {
    AXAuditElement * _auditElement;
    NSString * _auditTestType;
    NSString * _backgroundColor;
    struct CGPoint { 
        double x; 
        double y; 
    }  _containerOrigin;
    AXAuditIssueDescriptionManager * _descManager;
    NSString * _elementDescription;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _elementRect;
    NSString * _elementText;
    double  _fontSize;
    NSString * _foregroundColor;
    NSNumber * _imageIdentifier;
    bool  _isDuplicate;
    long long  _issueClassification;
    NSArray * _longDescExtraInfo;
    NSString * _mlGeneratedDescription;
    long long  _platform;
    NSString * _screenGroupId;
    NSArray * _suggestedSelectorsToFix;
    NSString * _timeStamp;
}

@property (nonatomic, retain) AXAuditElement *auditElement;
@property (nonatomic, retain) NSString *auditTestType;
@property (nonatomic, retain) NSString *backgroundColor;
@property (nonatomic) struct CGPoint { double x1; double x2; } containerOrigin;
@property (nonatomic, retain) AXAuditIssueDescriptionManager *descManager;
@property (nonatomic, retain) NSString *elementDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } elementRect;
@property (nonatomic, retain) NSString *elementText;
@property (nonatomic) double fontSize;
@property (nonatomic, retain) NSString *foregroundColor;
@property (nonatomic, retain) NSNumber *imageIdentifier;
@property (nonatomic) bool isDuplicate;
@property (nonatomic) long long issueClassification;
@property (nonatomic, retain) NSArray *longDescExtraInfo;
@property (nonatomic, retain) NSString *mlGeneratedDescription;
@property (nonatomic) long long platform;
@property (nonatomic, retain) NSString *screenGroupId;
@property (nonatomic, retain) NSArray *suggestedSelectorsToFix;
@property (nonatomic, copy) NSString *timeStamp;

+ (Class)_auditIssueClassForType:(long long)arg1;
+ (id)auditIssueForClassification:(long long)arg1;
+ (void)registerTransportableObjectWithManager:(id)arg1;

- (void).cxx_destruct;
- (bool)_isSameRelativeLocationAsAuditIssue:(id)arg1;
- (long long)_platformForClassification:(long long)arg1;
- (id)auditElement;
- (id)auditTestType;
- (id)backgroundColor;
- (long long)compare:(id)arg1;
- (struct CGPoint { double x1; double x2; })containerOrigin;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descManager;
- (id)description;
- (id)elementDescription;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })elementRect;
- (id)elementText;
- (double)fontSize;
- (id)foregroundColor;
- (id)foundLogMessage;
- (unsigned long long)hash;
- (id)imageIdentifier;
- (id)init;
- (bool)isDuplicate;
- (bool)isEqual:(id)arg1;
- (long long)issueClassification;
- (id)longDescExtraInfo;
- (id)mlGeneratedDescription;
- (long long)platform;
- (id)screenGroupId;
- (void)setAuditElement:(id)arg1;
- (void)setAuditTestType:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContainerOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDescManager:(id)arg1;
- (void)setElementDescription:(id)arg1;
- (void)setElementRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setElementText:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setImageIdentifier:(id)arg1;
- (void)setIsDuplicate:(bool)arg1;
- (void)setIssueClassification:(long long)arg1;
- (void)setLongDescExtraInfo:(id)arg1;
- (void)setMlGeneratedDescription:(id)arg1;
- (void)setPlatform:(long long)arg1;
- (void)setScreenGroupId:(id)arg1;
- (void)setSuggestedSelectorsToFix:(id)arg1;
- (void)setTimeStamp:(id)arg1;
- (id)suggestedSelectorsToFix;
- (id)timeStamp;

@end
