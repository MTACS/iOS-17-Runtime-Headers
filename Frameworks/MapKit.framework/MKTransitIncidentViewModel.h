
@interface MKTransitIncidentViewModel : NSObject {
    bool  _blocking;
    NSString * _message;
    bool  _showImage;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (getter=isBlocking, nonatomic) bool blocking;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) bool showImage;
@property (nonatomic, readonly) UIColor *symbolColor;
@property (nonatomic, readonly) NSString *symbolName;

- (void).cxx_destruct;
- (id)backgroundColor;
- (bool)isBlocking;
- (bool)isEqual:(id)arg1;
- (id)message;
- (void)setBlocking:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setShowImage:(bool)arg1;
- (bool)showImage;
- (id)symbolColor;
- (id)symbolName;

@end
