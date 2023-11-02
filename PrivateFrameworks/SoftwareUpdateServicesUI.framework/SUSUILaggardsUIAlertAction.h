
@interface SUSUILaggardsUIAlertAction : BSAction {
    SUDescriptor * _descriptor;
    bool  _loaded;
}

@property (nonatomic, readonly, retain) SUDescriptor *descriptor;

- (void).cxx_destruct;
- (void)decodeFromCoder:(id)arg1;
- (id)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDescriptor:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)loadIfNecessary;

@end
