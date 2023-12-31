
@interface BKPresenceDetectOperation : BKOperation {
    long long  _priority;
}

@property (nonatomic) long long priority;

- (id)optionsDictionaryWithError:(id*)arg1;
- (long long)priority;
- (void)setPriority:(long long)arg1;
- (void)startBioOperation:(bool)arg1 reply:(id /* block */)arg2;

@end
