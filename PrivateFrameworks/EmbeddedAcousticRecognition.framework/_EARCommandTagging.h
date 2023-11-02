
@interface _EARCommandTagging : NSObject <NSCopying> {
    NSString * _commandId;
    NSArray * _tagSequence;
    struct unique_ptr<quasar::CommandTagging, std::default_delete<quasar::CommandTagging>> { 
        struct __compressed_pair<quasar::CommandTagging *, std::default_delete<quasar::CommandTagging>> { 
            struct CommandTagging {} *__value_; 
        } __ptr_; 
    }  _tagging;
}

@property (nonatomic, readonly, copy) NSString *commandId;
@property (nonatomic, readonly, copy) NSArray *tagSequence;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithQuasarCommandTagging:(const void*)arg1;
- (id)commandId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)tagSequence;
- (id)tokensForTag:(id)arg1;

@end
