
@interface INFSentenceToken : NSObject {
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSString *identifier;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)stringForContext:(id)arg1;

@end
