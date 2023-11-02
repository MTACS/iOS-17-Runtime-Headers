
@interface GDVURecognitionResult : NSObject {
    void _tag;
    void confidence;
    void entityIdentifier;
}

@property (nonatomic, readonly) float confidence;
@property (nonatomic, retain) GDEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly) NSUUID *tag;

- (void).cxx_destruct;
- (float)confidence;
- (id)entityIdentifier;
- (id)init;
- (void)setEntityIdentifier:(id)arg1;
- (id)tag;

@end
