
@interface VSRecognitionURLAction : VSRecognitionAction {
    NSURL * _url;
}

- (id)URL;
- (int)completionType;
- (void)dealloc;
- (id)perform;
- (void)setURL:(id)arg1;

@end
