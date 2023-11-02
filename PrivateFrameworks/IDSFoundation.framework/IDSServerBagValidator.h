
@interface IDSServerBagValidator : NSObject {
    IDSServerBagConfig * _config;
}

@property (nonatomic, retain) IDSServerBagConfig *config;

- (void).cxx_destruct;
- (id)config;
- (id)initWithConfig:(id)arg1;
- (void)setConfig:(id)arg1;
- (id)trustedContentsFromRawContents:(id)arg1 shouldReport:(bool)arg2 withError:(id*)arg3;

@end
