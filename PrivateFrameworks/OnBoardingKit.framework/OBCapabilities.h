
@interface OBCapabilities : NSObject {
    bool  _preventOpeningSafari;
    bool  _preventURLDataDetection;
}

@property (nonatomic) bool preventOpeningSafari;
@property (nonatomic) bool preventURLDataDetection;

+ (id)sharedCapabilities;

- (bool)isWAPI;
- (bool)preventOpeningSafari;
- (bool)preventURLDataDetection;
- (void)setPreventOpeningSafari:(bool)arg1;
- (void)setPreventURLDataDetection:(bool)arg1;

@end
