
@interface MFLineEndingConverterFilter : MFBaseFilterDataConsumer {
    bool  _lastCR;
}

- (long long)appendData:(id)arg1;
- (void)done;

@end
