
@interface _EARProfiler : NSObject {
    bool  __hasPMP;
    bool  __keepLogFiles;
    bool  __memoryProfiler;
    bool  __perfProfiler;
    bool  __powerProfiler;
    double  _ane_time;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _background_power;
    NSString * _background_power_logfile_name;
    double  _end_time;
    double  _jetsam_max;
    double  _jetsam_tot;
    double  _max_rss;
    unsigned long long  _n_samples;
    struct vector<void *, std::allocator<void *>> { 
        void **__begin_; 
        void **__end_; 
        struct __compressed_pair<void **, std::allocator<void *>> { 
            void **__value_; 
        } __end_cap_; 
    }  _networks;
    NSString * _power_profiler_name;
    struct powerSummary { 
        double total_energy; 
        double ane_energy; 
        double gpu_energy; 
        double ecpu_energy; 
        double pcpu_energy; 
        double dram_energy; 
        double other_energy; 
        double total_power; 
        double ane_power; 
        double gpu_power; 
        double ecpu_power; 
        double pcpu_power; 
        double dram_power; 
        double other_power; 
    }  _power_summary;
    NSString * _runtime_power_logfile_name;
    double  _start_time;
}

@property bool _hasPMP;
@property bool _keepLogFiles;
@property bool _memoryProfiler;
@property bool _perfProfiler;
@property bool _powerProfiler;

+ (id)sharedProfiler;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)KeepLogFiles:(bool)arg1;
- (bool)_hasPMP;
- (bool)_keepLogFiles;
- (bool)_memoryProfiler;
- (bool)_perfProfiler;
- (bool)_powerProfiler;
- (void)addProfilingNetwork:(void*)arg1;
- (void)cleanupLogfiles;
- (void)finishProfiling;
- (void)finishProfilingNetworks;
- (id)init;
- (void)parsePowerSummary:(id)arg1 writeTo:(struct powerSummary { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; }*)arg2;
- (void)reportProfiling;
- (id)reportProfilingAsDictionary;
- (void)reset;
- (void)sample;
- (void)setMemoryProfiler:(bool)arg1;
- (void)setPerfProfiler:(bool)arg1;
- (void)setPowerProfiler:(bool)arg1 powerProfilerName:(id)arg2;
- (void)set_hasPMP:(bool)arg1;
- (void)set_keepLogFiles:(bool)arg1;
- (void)set_memoryProfiler:(bool)arg1;
- (void)set_perfProfiler:(bool)arg1;
- (void)set_powerProfiler:(bool)arg1;

@end
