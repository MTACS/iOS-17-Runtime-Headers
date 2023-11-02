
@interface WDMedicalRecordSourceDataViewController : HKViewController {
    bool  _hasFetchedSourceString;
    HKMedicalRecord * _medicalRecord;
    HRProfile * _profile;
    UIBarButtonItem * _shareItem;
    UITextView * _sourceView;
}

@property (nonatomic) bool hasFetchedSourceString;
@property (nonatomic, readonly, copy) HKMedicalRecord *medicalRecord;
@property (nonatomic, readonly) HRProfile *profile;
@property (nonatomic, retain) UIBarButtonItem *shareItem;
@property (nonatomic, readonly) UITextView *sourceView;

- (void).cxx_destruct;
- (void)_fetchAndDisplaySourceStringIfNecessary;
- (void)_tapToRadar:(id)arg1;
- (void)displaySourceString:(id)arg1;
- (bool)hasFetchedSourceString;
- (id)initWithProfile:(id)arg1 medicalRecord:(id)arg2;
- (void)loadView;
- (id)medicalRecord;
- (id)profile;
- (void)selectAll:(id)arg1;
- (void)setHasFetchedSourceString:(bool)arg1;
- (void)setShareItem:(id)arg1;
- (void)share:(id)arg1;
- (id)shareItem;
- (id)sourceView;
- (void)viewWillAppear:(bool)arg1;

@end
