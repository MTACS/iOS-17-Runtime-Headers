
@interface NewsUI2.PuzzleEmbedScript : NSObject <SWScript> {
    void eventDetail;
    void eventName;
    void identifier;
    void queueable;
}

@property (nonatomic, readonly) NSString *executableScript;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool queueable;
@property (nonatomic, readonly) WKUserScript *userScript;

- (void).cxx_destruct;
- (id)executableScript;
- (id)identifier;
- (id)init;
- (bool)queueable;
- (id)userScript;

@end
