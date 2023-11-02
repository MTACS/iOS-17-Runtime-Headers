
@interface _NTKCFaceDetailPhotoCropViewController : UIViewController <UIScrollViewDelegate> {
    UIBarButtonItem * _cancelButton;
    bool  _cancelConfirmed;
    id /* block */  _completionHandler;
    UIBarButtonItem * _deleteButton;
    bool  _deleteConfirmed;
    NTKCompanionCustomPhotosEditor * _editor;
    NTKFace * _face;
    unsigned long long  _index;
    CAShapeLayer * _mask;
    double  _photoScale;
    CAShapeLayer * _reverseMask;
    NTKCCenteringScrollView * _scrollView;
    NTKDigitalTimeLabel * _time;
    UIView * _timeContainer;
    NTKDigitalTimeLabelStyle * _timeStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NTKCompanionCustomPhotosEditor *editor;
@property (nonatomic, retain) NTKFace *face;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long index;
@property (readonly) Class superclass;
@property (nonatomic, retain) NTKDigitalTimeLabelStyle *timeStyle;

- (void).cxx_destruct;
- (void)_cancelPressed;
- (void)_deletePressed;
- (void)_donePressed;
- (void)dismissWithSaving:(bool)arg1;
- (id)editor;
- (id)face;
- (unsigned long long)index;
- (id)initWithIndex:(unsigned long long)arg1 inPhotosEditor:(id)arg2 forFace:(id)arg3 timeStyle:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)setEditor:(id)arg1;
- (void)setFace:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setTimeStyle:(id)arg1;
- (id)timeStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
