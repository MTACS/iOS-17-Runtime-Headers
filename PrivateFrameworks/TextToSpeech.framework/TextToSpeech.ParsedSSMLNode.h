
@interface TextToSpeech.ParsedSSMLNode : NSObject {
    void attributes;
    void children;
    void parent;
    void range;
    void rawText;
    void tag;
    void tagEndRange;
    void tagName;
    void tagStartRange;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
