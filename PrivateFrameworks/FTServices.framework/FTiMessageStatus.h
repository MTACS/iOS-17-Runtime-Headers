
@interface FTiMessageStatus : NSObject {
    FTServiceStatus * _serviceStatus;
}

@property (nonatomic, readonly) bool iMessageSupported;
@property (nonatomic, readonly) FTServiceStatus *serviceStatus;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)iMessageSupported;
- (id)initPrivate;
- (id)serviceStatus;

@end
