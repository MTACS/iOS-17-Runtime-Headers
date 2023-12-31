
@interface IKDOMXPathException : IKJSObject <IKJSDOMXPathException> {
    long long  code;
}

@property (nonatomic) long long code;

+ (id)exceptionWithAppContext:(id)arg1 code:(long long)arg2;

- (long long)code;
- (void)setCode:(long long)arg1;

@end
