
@interface WebVideoContainerLayer : CALayer {
    struct RetainPtr<AVPlayerLayer> { 
        void *m_ptr; 
    }  _playerLayer;
}

@property (nonatomic, retain) AVPlayerLayer *playerLayer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)playerLayer;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPlayerLayer:(id)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;

@end
