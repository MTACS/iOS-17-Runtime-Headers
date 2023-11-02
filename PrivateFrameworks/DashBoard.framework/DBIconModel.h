
@interface DBIconModel : SBHIconModel {
    <DBIconModelApplicationDataSource> * _carApplicationDataSource;
    NSString * _current_OEMIconLabel;
    bool  _current_isSet;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _current_screenBounds;
    bool  _current_showsOEMIcon;
    unsigned long long  _current_statusBarEdge;
    <DBEnvironment> * _environment;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconImageSize;
    unsigned long long  _interactionAffordances;
    NSString * _metadata_OEMIconLabel;
    NSArray * _metadata_hiddenBundleIdentifiers;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _metadata_screenBounds;
    bool  _metadata_showsOEMIcon;
}

@property (nonatomic, readonly) NSString *OEMIconLabel;
@property (nonatomic) <DBIconModelApplicationDataSource> *carApplicationDataSource;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, copy) NSString *current_OEMIconLabel;
@property (nonatomic) bool current_isSet;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } current_screenBounds;
@property (nonatomic) bool current_showsOEMIcon;
@property (nonatomic) unsigned long long current_statusBarEdge;
@property (nonatomic) <DBEnvironment> *environment;
@property (nonatomic, readonly) NSArray *hiddenBundleIdentifiers;
@property (nonatomic) struct CGSize { double x1; double x2; } iconImageSize;
@property (nonatomic) unsigned long long interactionAffordances;
@property (nonatomic, copy) NSString *metadata_OEMIconLabel;
@property (nonatomic, retain) NSArray *metadata_hiddenBundleIdentifiers;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } metadata_screenBounds;
@property (nonatomic) bool metadata_showsOEMIcon;
@property (nonatomic, readonly) unsigned long long rowCount;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } screenBounds;
@property (nonatomic, readonly) bool showsOEMIcon;

- (void).cxx_destruct;
- (id)OEMIconLabel;
- (void)_importStateWithoutLayout:(id)arg1;
- (bool)_showInternalApps;
- (bool)_showPrototypeApps;
- (id)analyticsIconRepresentation;
- (id)carApplicationDataSource;
- (unsigned long long)columnCount;
- (id)current_OEMIconLabel;
- (bool)current_isSet;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })current_screenBounds;
- (bool)current_showsOEMIcon;
- (unsigned long long)current_statusBarEdge;
- (void)didUnarchiveMetadata:(id)arg1;
- (id)environment;
- (id)exportIconLayoutState;
- (id)exportStateForCarKit;
- (id)hiddenBundleIdentifiers;
- (struct CGSize { double x1; double x2; })iconImageSize;
- (id)iconModelMetadata;
- (void)importState:(id)arg1;
- (id)initWithStore:(id)arg1 carApplicationDataSource:(id)arg2;
- (unsigned long long)interactionAffordances;
- (bool)isIconVisible:(id)arg1;
- (void)loadAllIcons;
- (id)metadata_OEMIconLabel;
- (id)metadata_hiddenBundleIdentifiers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })metadata_screenBounds;
- (bool)metadata_showsOEMIcon;
- (void)resetCurrentIconState;
- (unsigned long long)rowCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenBounds;
- (void)setCarApplicationDataSource:(id)arg1;
- (void)setCurrent_OEMIconLabel:(id)arg1;
- (void)setCurrent_isSet:(bool)arg1;
- (void)setCurrent_screenBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrent_showsOEMIcon:(bool)arg1;
- (void)setCurrent_statusBarEdge:(unsigned long long)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setIconImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setInteractionAffordances:(unsigned long long)arg1;
- (void)setMetadata_OEMIconLabel:(id)arg1;
- (void)setMetadata_hiddenBundleIdentifiers:(id)arg1;
- (void)setMetadata_screenBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMetadata_showsOEMIcon:(bool)arg1;
- (bool)showsOEMIcon;
- (bool)supportsDock;

@end
