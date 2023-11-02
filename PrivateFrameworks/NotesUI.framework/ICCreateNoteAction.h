
@interface ICCreateNoteAction : NSObject {
    bool  _allowsNoContent;
    ICUnifiedNoteContext * _noteContext;
}

@property (nonatomic) bool allowsNoContent;
@property (nonatomic, readonly) ICUnifiedNoteContext *noteContext;

- (void).cxx_destruct;
- (bool)allowsNoContent;
- (id)initWithNoteContext:(id)arg1;
- (id)noteContext;
- (id)performWithTitle:(id)arg1 contents:(id)arg2 container:(id)arg3 error:(id*)arg4;
- (void)setAllowsNoContent:(bool)arg1;

@end
