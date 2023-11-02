
@interface VKCMRCDataDetectorElement : VKCBaseDataDetectorElement <BCSActionDelegate, NSSecureCoding> {
    BCSAction * _barcodeAction;
    VNBarcodeObservation * _barcodeObservation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    NSArray * _boundingQuads;
    NSArray * _children;
    bool  _childrenCreated;
    unsigned long long  _dataDetectorTypes;
    UIViewController * _presentingViewControllerForMrcAction;
    VKQuad * _quad;
}

@property (nonatomic, retain) BCSAction *barcodeAction;
@property (nonatomic, retain) VNBarcodeObservation *barcodeObservation;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic) bool childrenCreated;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIMenu *mrcMenu;
@property (nonatomic) UIViewController *presentingViewControllerForMrcAction;
@property (nonatomic, retain) VKQuad *quad;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)barcodeAction;
- (id)barcodeObservation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)boundingQuads;
- (id)children;
- (bool)childrenCreated;
- (void)createChildrenIfNecessary;
- (unsigned long long)dataDetectorTypes;
- (id)debugMenu;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBarcodeObservation:(id)arg1 action:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isMRCDataDetector;
- (id)mrcMenu;
- (id)presentingViewControllerForAction:(id)arg1;
- (id)presentingViewControllerForMrcAction;
- (id)quad;
- (id)scannerResult;
- (void)setBarcodeAction:(id)arg1;
- (void)setBarcodeObservation:(id)arg1;
- (void)setBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setChildrenCreated:(bool)arg1;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)setPresentingViewControllerForMrcAction:(id)arg1;
- (void)setQuad:(id)arg1;
- (id)stringValue;

@end
