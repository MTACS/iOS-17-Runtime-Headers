
@interface VKMetrics : NSObject {
    struct unique_ptr<md::LabelMetrics, std::default_delete<md::LabelMetrics>> { 
        struct __compressed_pair<md::LabelMetrics *, std::default_delete<md::LabelMetrics>> { 
            struct LabelMetrics {} *__value_; 
        } __ptr_; 
    }  _labelMetrics;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForItem:(unsigned char)arg1 text:(id)arg2 locale:(id)arg3;
- (id)initWithDescriptor:(id)arg1;

@end
