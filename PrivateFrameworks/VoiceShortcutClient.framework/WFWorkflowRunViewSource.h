
@interface WFWorkflowRunViewSource : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _contextID;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originFrame;
    UIView * _originView;
    unsigned long long  _renderID;
    NSUUID * _uuid;
}

@property (nonatomic) unsigned int contextID;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } originFrame;
@property (nonatomic) UIView *originView;
@property (nonatomic) unsigned long long renderID;
@property (nonatomic, readonly, copy) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)contextID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithView:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInvalidated;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })originFrame;
- (id)originView;
- (void)refresh;
- (unsigned long long)renderID;
- (void)setContextID:(unsigned int)arg1;
- (void)setOriginFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOriginView:(id)arg1;
- (void)setRenderID:(unsigned long long)arg1;
- (void)updateSourceView:(id)arg1;
- (id)uuid;

@end
