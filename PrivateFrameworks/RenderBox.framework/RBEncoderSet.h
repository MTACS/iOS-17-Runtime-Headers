
@interface RBEncoderSet : NSObject {
    bool  _final;
    struct refcounted_ptr<RB::Encoder::FontSet> { 
        struct FontSet {} *_p; 
    }  _font_set;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addDisplayList:(id)arg1;
- (void)commit;
- (id)init;

@end
