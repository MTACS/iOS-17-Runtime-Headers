
@interface SGMIAttachmentSizeHistogram : NSObject {
    unsigned long long  _count128KBTo512KB;
    unsigned long long  _count32KBTo128KB;
    unsigned long long  _count512KBTo2MB;
    unsigned long long  _count8KBTo32KB;
    unsigned long long  _countOver2MB;
    unsigned long long  _countUpTo8KB;
}

@property (nonatomic, readonly) unsigned long long count128KBTo512KB;
@property (nonatomic, readonly) unsigned long long count32KBTo128KB;
@property (nonatomic, readonly) unsigned long long count512KBTo2MB;
@property (nonatomic, readonly) unsigned long long count8KBTo32KB;
@property (nonatomic, readonly) unsigned long long countOver2MB;
@property (nonatomic, readonly) unsigned long long countUpTo8KB;

+ (id)bucketsNames;

- (void)bucketizeWithSize:(unsigned long long)arg1;
- (unsigned long long)count128KBTo512KB;
- (unsigned long long)count32KBTo128KB;
- (unsigned long long)count512KBTo2MB;
- (unsigned long long)count8KBTo32KB;
- (unsigned long long)countOver2MB;
- (unsigned long long)countUpTo8KB;
- (id)description;
- (id)initWithNumberArray:(id)arg1;
- (bool)isEmpty;
- (id)numberArray;

@end
