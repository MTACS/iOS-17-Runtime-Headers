
@interface MessageActivityViewController : UIActivityViewController <EFLoggable> {
    bool  _sourceIsManaged;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool sourceIsManaged;
@property (readonly) Class superclass;

+ (id)log;

- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (void)setSourceIsManaged:(bool)arg1;
- (bool)sourceIsManaged;

@end
