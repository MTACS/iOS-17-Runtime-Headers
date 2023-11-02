
@interface PPConnectionsSource : NSObject {
    <PPConnectionsLocationSourceDelegate> * _delegate;
}

@property (nonatomic) <PPConnectionsLocationSourceDelegate> *delegate;

+ (id)identifier;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
