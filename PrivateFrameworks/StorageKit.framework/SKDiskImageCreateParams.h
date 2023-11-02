
@interface SKDiskImageCreateParams : NSObject {
    long long  _encryption;
    long long  _format;
    unsigned long long  _numBlocks;
    NSURL * _source;
    bool  _stdinPassPhrase;
    NSString * _volumeName;
}

@property (nonatomic) long long encryption;
@property (nonatomic) long long format;
@property unsigned long long numBlocks;
@property (nonatomic, retain) NSURL *source;
@property (nonatomic) bool stdinPassPhrase;
@property (nonatomic, copy) NSString *volumeName;

- (void).cxx_destruct;
- (id)description;
- (id)diConvertParamsWithOutputURL:(id)arg1 error:(id*)arg2;
- (id)diCreateParamsWithURL:(id)arg1 error:(id*)arg2;
- (long long)encryption;
- (long long)format;
- (id)initWithDisk:(id)arg1;
- (id)initWithDisk:(id)arg1 format:(long long)arg2;
- (id)initWithDiskImage:(id)arg1;
- (id)initWithDiskImage:(id)arg1 format:(long long)arg2;
- (id)initWithFormat:(long long)arg1 sourceURL:(id)arg2;
- (id)initWithNumBlocks:(unsigned long long)arg1 volumeName:(id)arg2;
- (id)initWithNumBlocks:(unsigned long long)arg1 volumeName:(id)arg2 format:(long long)arg3;
- (unsigned long long)numBlocks;
- (id)redactedDescription;
- (void)setEncryption:(long long)arg1;
- (void)setFormat:(long long)arg1;
- (void)setNumBlocks:(unsigned long long)arg1;
- (void)setSource:(id)arg1;
- (void)setStdinPassPhrase:(bool)arg1;
- (void)setVolumeName:(id)arg1;
- (id)source;
- (bool)stdinPassPhrase;
- (id)volumeName;

@end
