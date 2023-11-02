
@interface LAUIPearlGlyphViewStaticResources : NSObject {
    struct optional<LAUI_uniform_cubic_b_spline_renderer::renderer_t::shared_state_t> { 
        union { 
            BOOL __null_state_; 
            struct shared_state_t { 
                <MTLDevice> *_device; 
                <MTLDepthStencilState> *_depth_stencil_state; 
                <MTLComputePipelineState> *_tesselation_factor_pipeline; 
                <MTLRenderPipelineState> *_tube_pipeline; 
                struct array<id<MTLRenderPipelineState>, 3UL> { 
                    <MTLRenderPipelineState> *__elems_[3]; 
                } _begin_cap_pipelines; 
                struct array<id<MTLRenderPipelineState>, 3UL> { 
                    <MTLRenderPipelineState> *__elems_[3]; 
                } _end_cap_pipelines; 
                <MTLComputePipelineState> *_horizontal_blur_pipeline; 
                <MTLComputePipelineState> *_vertical_blur_pipeline; 
                <MTLComputePipelineState> *_accumulator_pipeline; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _state;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end
