
@interface NewsUI2.PuzzleRadarScript : NSObject <SWScript>

@property (nonatomic, readonly) NSString *executableScript;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool queueable;
@property (nonatomic, readonly) WKUserScript *userScript;

- (id)executableScript;
- (id)identifier;
- (id)init;
- (bool)queueable;
- (id)userScript;

@end
