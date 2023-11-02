
@interface SWMutableConfiguration : SWConfiguration {
    NSURL * activePictureInPictureURL;
    struct CGSize { 
        double width; 
        double height; 
    }  canvasSize;
    NSString * contentEnvironment;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  contentFrame;
    NSString * contentSizeCategory;
    NSDictionary * dataSources;
    SWFeedConfiguration * feedConfiguration;
    bool  is24HourTime;
    bool  isTransitioning;
    SWKeyboardConfiguration * keyboardConfiguration;
    NSLocale * locale;
    <SWLocation> * location;
    NSURL * sourceURL;
    NSString * storeFront;
}

@property (nonatomic, copy) NSURL *activePictureInPictureURL;
@property (nonatomic) struct CGSize { double x1; double x2; } canvasSize;
@property (nonatomic, copy) NSString *contentEnvironment;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic, copy) NSString *contentSizeCategory;
@property (nonatomic, copy) NSDictionary *dataSources;
@property (nonatomic, copy) SWFeedConfiguration *feedConfiguration;
@property (nonatomic) bool is24HourTime;
@property (nonatomic) bool isTransitioning;
@property (nonatomic, copy) SWKeyboardConfiguration *keyboardConfiguration;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic, copy) <SWLocation> *location;
@property (nonatomic, copy) NSURL *sourceURL;
@property (nonatomic, copy) NSString *storeFront;

- (void).cxx_destruct;
- (id)activePictureInPictureURL;
- (struct CGSize { double x1; double x2; })canvasSize;
- (id)contentEnvironment;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (id)contentSizeCategory;
- (id)dataSources;
- (id)feedConfiguration;
- (bool)is24HourTime;
- (bool)isTransitioning;
- (id)keyboardConfiguration;
- (id)locale;
- (id)location;
- (void)setActivePictureInPictureURL:(id)arg1;
- (void)setCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentEnvironment:(id)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentSizeCategory:(id)arg1;
- (void)setDataSources:(id)arg1;
- (void)setFeedConfiguration:(id)arg1;
- (void)setIs24HourTime:(bool)arg1;
- (void)setIsTransitioning:(bool)arg1;
- (void)setKeyboardConfiguration:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setStoreFront:(id)arg1;
- (id)sourceURL;
- (id)storeFront;

@end
