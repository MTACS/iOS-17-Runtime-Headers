
@interface SWContainerConfiguration : NSObject <NSCopying> {
    NSURL * _activePictureInPictureURL;
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSize;
    NSString * _contentEnvironment;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    NSString * _contentSizeCategory;
    NSDictionary * _dataSources;
    SWFeedConfiguration * _feedConfiguration;
    NSString * _identifier;
    NSLocale * _locale;
    <SWLocation> * _location;
    NSURL * _sourceURL;
    NSString * _storeFront;
}

@property (nonatomic, copy) NSURL *activePictureInPictureURL;
@property (nonatomic) struct CGSize { double x1; double x2; } canvasSize;
@property (nonatomic, copy) NSString *contentEnvironment;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic, copy) NSString *contentSizeCategory;
@property (nonatomic, copy) NSDictionary *dataSources;
@property (nonatomic, copy) SWFeedConfiguration *feedConfiguration;
@property (nonatomic, copy) NSString *identifier;
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
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSources;
- (id)feedConfiguration;
- (id)identifier;
- (id)initWithStoreFront:(id)arg1 locale:(id)arg2 contentEnvironment:(id)arg3 contentSizeCategory:(id)arg4 canvasSize:(struct CGSize { double x1; double x2; })arg5 contentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 dataSources:(id)arg7 location:(id)arg8 sourceURL:(id)arg9 activePictureInPictureURL:(id)arg10 feedConfiguration:(id)arg11;
- (id)locale;
- (id)location;
- (void)setActivePictureInPictureURL:(id)arg1;
- (void)setCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentEnvironment:(id)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentSizeCategory:(id)arg1;
- (void)setDataSources:(id)arg1;
- (void)setFeedConfiguration:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setStoreFront:(id)arg1;
- (id)sourceURL;
- (id)storeFront;

@end
