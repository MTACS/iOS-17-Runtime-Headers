
@interface _EXHostViewControllerSessionConfiguration : NSObject <NSCopying> {
    bool  _beginHostingImmediately;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialFrame;
    <_EXSceneInitializationParameters> * _initializationParameters;
    id /* block */  _invalidationHandler;
    bool  _retryOnHostingFailure;
    NSString * _sceneIdentifier;
    long long  _sizeBridgingOptions;
}

@property (nonatomic) bool beginHostingImmediately;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialFrame;
@property (nonatomic, retain) <_EXSceneInitializationParameters> *initializationParameters;
@property (copy) id /* block */ invalidationHandler;
@property (nonatomic) bool retryOnHostingFailure;
@property (nonatomic, retain) NSString *sceneIdentifier;
@property (nonatomic) long long sizeBridgingOptions;

- (void).cxx_destruct;
- (bool)beginHostingImmediately;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSceneIdentifier:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrame;
- (id)initializationParameters;
- (id /* block */)invalidationHandler;
- (bool)retryOnHostingFailure;
- (id)sceneIdentifier;
- (void)setBeginHostingImmediately:(bool)arg1;
- (void)setInitialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInitializationParameters:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setRetryOnHostingFailure:(bool)arg1;
- (void)setSceneIdentifier:(id)arg1;
- (void)setSizeBridgingOptions:(long long)arg1;
- (long long)sizeBridgingOptions;

@end
